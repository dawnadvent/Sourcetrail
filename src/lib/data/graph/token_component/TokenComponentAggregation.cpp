#include "data/graph/token_component/TokenComponentAggregation.h"

TokenComponentAggregation::TokenComponentAggregation()
{
}

TokenComponentAggregation::~TokenComponentAggregation()
{
}

std::shared_ptr<TokenComponent> TokenComponentAggregation::copy() const
{
	return std::make_shared<TokenComponentAggregation>(*this);
}

int TokenComponentAggregation::getAggregationCount() const
{
	return m_ids.size();
}

const std::set<Id>& TokenComponentAggregation::getAggregationIds() const
{
	return m_ids;
}

void TokenComponentAggregation::addAggregationId(Id id)
{
	m_ids.insert(id);
}

void TokenComponentAggregation::removeAggregationId(Id id)
{
	m_ids.erase(id);
}
